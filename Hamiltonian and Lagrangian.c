    #include<stdio.h>
    int main()
    {
        int n,i,m,j;
        scanf("%d",&n);
        int a[n];
        int count;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(m=0;m<n-1;m++)
        {   count=0;
            for(j=m+1;j<n;j++)
            {   
                if(a[m]<a[j])
                {   
                    count=1;
                    break;
                }
            }
            if(count!=1)
              printf("%d ",a[m]);
        }
        printf("%d ",a[n-1]);
    }
