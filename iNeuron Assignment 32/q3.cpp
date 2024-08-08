/*3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class.*/
#include<iostream>
using namespace std;

class Animals
{
   protected:
        string sound;
    public: 
        string Sound()
        {
            return sound;
        }
        void set_sound(string sound)
        {
            this->sound=sound;
        }
};
class Dogs: public Animals
{
    public:
        string Sound()
        {
            return sound;
        }
        void set_sound(string sound)
        {
            this->sound=sound;
        }
};
int main()
{
    Animals cat;
    cat.set_sound("meow");
    cout<<"Sound of cat: "<<cat.Sound();

    Dogs pet;
    pet.set_sound("bark");
    cout<<"\nSound of dog: "<<pet.Sound();

    return 0;
}
/*output-
Sound of cat: meow
Sound of dog: bark

Sound(): Overrides the Sound method from the base class. It returns the value of the inherited sound member variable.

set_sound(string sound): Overrides the set_sound method from the base class. It sets the value of the inherited sound member variable.

*/