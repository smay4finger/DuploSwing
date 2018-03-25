include <DobloFactory/doblo-factory.scad>

union() 
{
    translate([0, 0, 5]) nibbles(-1.5, -2, 0, 3, 4, DOBLO);
    difference()
    {
        cylinder(d=80, 5, true, $fa = 1);
        cylinder(d=70, 3, true, $fa = 1);
    }
}