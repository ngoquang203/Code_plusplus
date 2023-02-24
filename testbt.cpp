#include <iostream>
using namespace std ; 
class phanso{
	private :
		int tuso , mauso ;
	public :
		void nhap()
		{
			cin >> tuso >> mauso ;
		}
		void in()
		{
			cout << tuso << "/" << mauso ;
		}
		friend phanso tinhtongphanso(phanso a , phanso b) ;
};
phanso tinhtongphanso(phanso a , phanso b )
{
	phanso c ;
	c.tuso = a.tuso * b.mauso + a.mauso * b.tuso ;
	c.mauso = a.mauso * b.mauso ;
	return c ; 
}
int main()
{
	phanso a , b ; a.nhap() ; b.nhap();
	tinhtongphanso(a,b).in() ;	
}