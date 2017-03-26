
difference(){

    MouseCase();
 
    translate([35.1,2,102])
    sphere(d = 13.2);
    
    translate([-9.5,0,0])
    for(i = [1:5]){
        translate([i*9,22.5,2])
        #cube([5,20,40]);
    }

}



module MouseCase(){
import("C:/Users/LYUBOM~1.KIP/AppData/Local/Temp/Rar$DRa0.228/files/Mouse_Shell.stl");
}

