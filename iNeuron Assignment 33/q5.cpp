/*5. Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy.
Using these classes, calculate photon energy.
Energy of a photon=hc/λ
where h=6.626*10^-34 Js-->Planck's constant ,c=3*10^8 m/s-->speed of light*/
#include<bits/stdc++.h>
using namespace std;
class Photon
{
    protected:
        double wavelength;
    public:
        Photon(double wavelength)
        {
            this->wavelength=wavelength/pow(10,-10);
        }
};
class calculate_photonEnergy:public Photon
{
    private:
        double E;
    public:
        calculate_photonEnergy(double value_in_angstrom):Photon(value_in_angstrom)
        {

        }
        void calphotonEnergy()
        {
            E=6.626*(pow(10,-34))*3*(pow(10,8))/wavelength;
            cout<<"Value of photon Energy: "<<E<<endl;
        }
        
};
int main()
{
    calculate_photonEnergy e(10);
    e.calphotonEnergy();

    return 0;
}
/*OUTPUT-
Value of photon Energy: 1.9878e-036
 */