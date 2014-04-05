#include <istream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
		    while(scanf("%d",&n)&&n)
				    {
						        bool matrix[n][n];
										        for (int i=0;i<n;i++)
														            for (int j=0;j<n;j++)
																				                matrix[i][j]=false;
																												        int x ;
																																        while(scanf("%d",&x)&&x)
																																				        {
																																								            int y;
																																														            while(scanf("%d",&y)&&y)
																																																				            {
																																																										                matrix[x-1][y-1] = true;
																																																																		            }
																																																																								        }
																																																																												        for (int k=0;k<n;k++)
																																																																																             for (int i=0;i<n;i++)
																																																																																						                  for (int j=0;j<n;j++)
																																																																																															                     if(matrix[i][k]&&matrix[k][j])
																																																																																																									                          matrix[i][j]=true;
																																																																																																																						        int z;
																																																																																																																										        scanf("%d",&z);
																																																																																																																														        while(z-->0)
																																																																																																																																		        {
																																																																																																																																						            int w;
																																																																																																																																												            scanf("%d",&w);
																																																																																																																																																		            int count=0;
																																																																																																																																																								            for (int i=0;i<n;i++)
																																																																																																																																																														                if(matrix[w-1][i]== false)
																																																																																																																																																																						                    count++;
																																																																																																																																																																																            printf("%d",count);
																																																																																																																																																																																						            for (int i=0;i<n;i++)
																																																																																																																																																																																												                if(matrix[w-1][i] == false)
																																																																																																																																																																																																				                    printf(" %d",(i+1));
																																																																																																																																																																																																														            printf("\n");
																																																																																																																																																																																																																				        }

																																																																																																																																																																																																																								    }

																																																																																																																																																																																																																										    return 0;
																																																																																																																																																																																																																												}
