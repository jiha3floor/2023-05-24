eval

int get_accruacy(int y-ture[],int y_pred[])
{
	int i;
	int res =0;

	for(i=0;i<100;i++)
		if(y-ture[i]==y_pred[i])
			res++;
return res;
}
