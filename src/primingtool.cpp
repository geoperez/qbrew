#include "primingtool.h"
#include "ui_primingtool.h"

PrimingTool::PrimingTool(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrimingTool)
{
    ui->setupUi(this);
}

PrimingTool::~PrimingTool()
{
    delete ui;
}

// IMPLEMENT:
/*
 *
function primeCalc() {
var co2Volume = document.getElementById("co2Volume").value;
var SIGDIGITS = 2;
var tempF = document.getElementById("tempF");
var dissolvedCO2 = ((-0.9753) * Math.log(tempF.value) + 4.9648);
var volBeer = document.getElementById("beerVol");
if (document.getElementById("desiredCO2").value !== "") {
if (co2Volume.value == null || document.getElementById("desiredCO2").value !== 0 ) {
co2Volume = document.getElementById("desiredCO2");
var primeAmount = co2Volume.value * volBeer.value - dissolvedCO2;
}
else var primeAmount = co2Volume.options[co2Volume.selectedIndex].value * volBeer.value - dissolvedCO2;
jQuery('#cornsugarG').html(((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#cornsugarO').html((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#cornsugarC').html((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/200).toFixed(SIGDIGITS));
jQuery('#sucroseG').html(((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8)*.91).toFixed(SIGDIGITS));
jQuery('#sucroseO').html(((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/28.34952)*.91).toFixed(SIGDIGITS));
jQuery('#sucroseC').html(((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/200)*.88).toFixed(SIGDIGITS));
jQuery('#turbinadoG').html(((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8)*.91).toFixed(SIGDIGITS));
jQuery('#turbinadoO').html(((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/28.34952)*.91).toFixed(SIGDIGITS));
jQuery('#turbinadoC').html(((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/200)*.88).toFixed(SIGDIGITS));
jQuery('#demararaG').html(((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8)*.91).toFixed(SIGDIGITS));
jQuery('#demararaO').html(((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/28.34952)*.91).toFixed(SIGDIGITS));
jQuery('#demararaC').html(((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/200)*.88).toFixed(SIGDIGITS));
jQuery('#dextroseG').html(((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#dextroseO').html((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#dextroseC').html((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/200).toFixed(SIGDIGITS));
jQuery('#cornsyrupG').html(((co2Volume.value - dissolvedCO2)*5.3*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#cornsyrupO').html((((co2Volume.value - dissolvedCO2)*5.3*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#cornsyrupC').html((((co2Volume.value - dissolvedCO2)*5.3*(volBeer.value * 3.8))/325).toFixed(SIGDIGITS));
jQuery('#brownsugarG').html(((co2Volume.value - dissolvedCO2)*4.1*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#brownsugarO').html((((co2Volume.value - dissolvedCO2)*4.1*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#brownsugarC').html((((co2Volume.value - dissolvedCO2)*4.1*(volBeer.value * 3.8))/230).toFixed(SIGDIGITS));
jQuery('#molassesG').html(((co2Volume.value - dissolvedCO2)*5.1*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#molassesO').html((((co2Volume.value - dissolvedCO2)*5.1*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#molassesC').html((((co2Volume.value - dissolvedCO2)*5.1*(volBeer.value * 3.8))/320).toFixed(SIGDIGITS));
jQuery('#mapleG').html(((co2Volume.value - dissolvedCO2)*4.7*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#mapleO').html((((co2Volume.value - dissolvedCO2)*4.7*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#mapleC').html((((co2Volume.value - dissolvedCO2)*4.7*(volBeer.value * 3.8))/320).toFixed(SIGDIGITS));
jQuery('#sorghumG').html(((co2Volume.value - dissolvedCO2)*5.3*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#sorghumO').html((((co2Volume.value - dissolvedCO2)*5.3*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#sorghumC').html((((co2Volume.value - dissolvedCO2)*5.3*(volBeer.value * 3.8))/320).toFixed(SIGDIGITS));
jQuery('#honeyG').html(((co2Volume.value - dissolvedCO2)*4.9*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#honeyO').html((((co2Volume.value - dissolvedCO2)*4.9*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#honeyC').html((((co2Volume.value - dissolvedCO2)*4.9*(volBeer.value * 3.8))/340).toFixed(SIGDIGITS));
jQuery('#dmeG').html(((co2Volume.value - dissolvedCO2)*5.33*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#dmeO').html((((co2Volume.value - dissolvedCO2)*5.33*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#dmeC').html((((co2Volume.value - dissolvedCO2)*5.33*(volBeer.value * 3.8))/165).toFixed(SIGDIGITS));
jQuery('#dmelG').html(((co2Volume.value - dissolvedCO2)*7.3*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#dmelO').html((((co2Volume.value - dissolvedCO2)*7.3*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#dmelC').html((((co2Volume.value - dissolvedCO2)*7.3*(volBeer.value * 3.8))/165).toFixed(SIGDIGITS));
jQuery('#belgiansyrupG').html(((co2Volume.value - dissolvedCO2)*5.75*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#belgiansyrupO').html((((co2Volume.value - dissolvedCO2)*5.75*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#belgiansyrupC').html((((co2Volume.value - dissolvedCO2)*5.75*(volBeer.value * 3.8))/320).toFixed(SIGDIGITS));
jQuery('#belgiansugarG').html(((co2Volume.value - dissolvedCO2)*4.85*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#belgiansugarO').html((((co2Volume.value - dissolvedCO2)*4.85*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#belgiansugarC').html((((co2Volume.value - dissolvedCO2)*4.85*(volBeer.value * 3.8))/230).toFixed(SIGDIGITS));
jQuery('#invertG').html(((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8)).toFixed(SIGDIGITS))
jQuery('#invertO').html((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS))
jQuery('#invertC').html((((co2Volume.value - dissolvedCO2)*4*(volBeer.value * 3.8))/320).toFixed(SIGDIGITS))
jQuery('#btreacleG').html(((co2Volume.value - dissolvedCO2)*4.2*(volBeer.value * 3.8) ).toFixed(SIGDIGITS));
jQuery('#btreacleO').html((((co2Volume.value - dissolvedCO2)*4.2*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#btreacleC').html((((co2Volume.value - dissolvedCO2)*4.2*(volBeer.value * 3.8))/320).toFixed(SIGDIGITS));
jQuery('#riceG').html(((co2Volume.value - dissolvedCO2)*4.6*(volBeer.value * 3.8)).toFixed(SIGDIGITS));
jQuery('#riceO').html((((co2Volume.value - dissolvedCO2)*4.6*(volBeer.value * 3.8))/28.34952).toFixed(SIGDIGITS));
jQuery('#riceC').html((((co2Volume.value - dissolvedCO2)*4.6*(volBeer.value * 3.8))/220).toFixed(SIGDIGITS));
}}
*/
