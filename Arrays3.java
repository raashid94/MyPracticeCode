class Arrays3{
public static void main(String[] args)
{

int i,j,k,c=0;
int arr[][][] = new int[2][2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
			c++;
			arr[i][j][k]=c;
			}
		}
	}


System.out.println("Arrary elements are:");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
			System.out.println(arr[i][j][k]);
			}
		//System.out.println();
		}

	//System.out.println();
	}
}
}
