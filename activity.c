#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int start;
    int finish;
} activity;
int compare(const void* a, const void* b)
{
    return ((activity*)a)->finish - ((activity*)b)->finish;
}
void activitySelection(activity activities[], int n)
{
    qsort(activities, n, sizeof(activity), compare);
    printf("(%d, %d), ", activities[0].start, activities[0].finish);
    int lastSelected = 0;


    for (int i = 1; i < n; i++)
    {
        if (activities[i].start >= activities[lastSelected].finish)
        {
            printf("(%d, %d), ", activities[i].start, activities[i].finish);
            lastSelected = i;
        }
    }
}
