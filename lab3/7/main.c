#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>

int main()
{

    int kMem;
    int *map = NULL;
    const char mem[] = "/dev/mem";

    
    kMem = open(mem, O_RDWR);

    if (kMem < 0)
    {
        printf("Error: Failed to open /dev/mem !\n");
        return 0;
    }
    else
    {
        printf("/dev/mem open successfully!\n");
    }

    map = (int *)(mmap(0, 10000, PROT_READ | PROT_WRITE, MAP_SHARED, kMem, 10000));
    printf("Kernel memory:\n");
    for (int i = 0; i < 100; i++)
        printf("At 0x%x\n", *(map + i));

    if (munmap(map, 10000) == -1)
    {
        perror("Error: unmapping");
    }
    close(kMem);

    return 0;
}