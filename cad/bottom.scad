difference()
{
    cylinder(d = 80, h = 30);
    translate([0, 0, 10]) cylinder(d = 70, h = 30.1);
}

translate([15, 50.5/2, 10+14.5/2]) rotate([90, 0, 0]) cylinder(d = 14.5, h = 50.5);
translate([-15, 50.5/2, 10+14.5/2]) rotate([90, 0, 0]) cylinder(d = 14.5, h = 50.5);