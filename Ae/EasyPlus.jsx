var comp = app.project.activeItem



var selCompProp = comp.selectedProperties


for(var p=0; p < selCompProp.length; p++){

    var keys = selCompProp[p].selectedKeys
   
    if(keys.length > 0){
    
        for(var k= 0; k < keys.length; k++){
            var inKey = selCompProp[0].keyInTemporalEase(keys[k])[0].influence
            var outKey = selCompProp[0].keyOutTemporalEase(keys[k])[0].influence
            // $.writeln(inKey)
            // $.writeln(outKey)

            if(outKey < 90){

            var easeOut = new KeyframeEase(0.1,outKey + 10)

            }else if(outKey >= 90&& outKey < 100){

                var easeOut = new KeyframeEase(0.1,100)

            }
            
            if(inKey < 90){

            var easeIn = new KeyframeEase(0.1,inKey + 10)

            }else if(inKey >= 90 && inKey < 100){ 

            var easeIn = new KeyframeEase(0.1,100)

            }
            selCompProp[p].setTemporalEaseAtKey(keys[k],[easeIn] ,[easeOut])
        

        }
        

    }
        

}

function checkLimits(key){
    
}