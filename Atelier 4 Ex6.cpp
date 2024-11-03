#include <iostream> 
 using namespace std ;


class Point
 {  
   float x, y ; 

 public :
   Point (float abs, float ord) ;  
   void deplace (float dx, float dy) ;  
   void affiche () ;      
 } ;


 Point::Point (float abs, float ord)
 {  x = abs ; y = ord ;
 }
 void Point::deplace (float dx, float dy)
 {  x = x + dx ; y = + dy ;
 }
 void Point::affiche ()
 {  cout << "Mes coordonnées cartésiennes sont " << x << " " << y << "\n" ;
 }
  int main ()
 { 
   Point p (1.25, 2.5) ;  
   p.affiche () ;      
   p.deplace (2.1, 3.4) ; 
   p.affiche () ;    
return 0;
}
