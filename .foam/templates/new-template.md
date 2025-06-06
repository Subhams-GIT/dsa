# recursion 
 paramterised way of writing a recursive call
void fun(int i,int n )
{
	if(i==n) return;
	i++;
	fun(i,n);
	cout<<i;
}

int main(){
	cout<<"enter any number"<<endl;
	int n;
	cin>>n;
	fun(1,n);

}

functional way of writing a recursive call

