#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int* elements = new int[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &elements[i]);
    }
    sort(elements, elements + n);
    int count = n;
    for(int i = 0 ; i < (n - 1) ; i++)
    {
        if(elements[i] == 0)
        {
            count--;
            continue;
        }
        if(elements[i] == elements[i + 1])
        {
            count--;
            continue;
        }
        
    }
    if(elements[n - 1] == 0)
        count--;
    printf("%d", count);

}