var comp = app.project.activeItem



var selCompProp = comp.selectedProperties


for(var p=0; p < selCompProp.length; p++){

    var keys = selCompProp[p].selectedKeys
   
    if(keys.length > 0){
    
        for(var k= 0; k < keys.length; k++){
            var inKey = selCompProp[0].keyInTemporalEase(keys[k])[0].influence
            var outKey = selCompProp[0].keyOutTemporalEase(keys[k])[0].influence
            $.writeln(inKey)
            $.writeln(outKey)

            if(outKey > 20){

            var easeOut = new KeyframeEase(0.1,outKey - 20)

            }else if(outKey <= 20 && outKey > 1){

                var easeOut = new KeyframeEase(100,0.9)

            }
            
            if(inKey > 20){

            var easeIn = new KeyframeEase(0.1,inKey -20)

            }else if(inKey <= 20 && inKey > 1){ 

            var easeIn = new KeyframeEase(0.1,0.9)

            }
            selCompProp[p].setTemporalEaseAtKey(keys[k],[easeIn] ,[easeOut])
        

        }
        

    }
        

}

function checkLimits(key){
    
}