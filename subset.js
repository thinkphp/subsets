/*
 *
 * Adrian Statescu <mergesortv@gmail.com> <http://thinkphp.ro> <http://adrianstatescu.com>
 * Display Pascal's Triangle.
 * MIT License
 * 
 */

DOMhelp = {

       addEvent: function(elem,evType,fn,useCapture){

                 if(elem.addEventListener) {

                         elem.addEventListener(evType,fn,useCapture);

                 } else if(elem.attachEvent) {

                         var r = elem.attachEvent('on'+evType,fn);

                         return r;                          

                 } else {

                        elem['on'+evType] = fn; 
                 }
       }

  };

$ = function(id){return document.getElementById(id);}

function genSubsets(n) {

         var v = [],

             out = '';

         for(var i = 0; i < n; i++) {

             v[i] = 0
         }   

         var s = 0;         

         do {

            v[ n - 1 ]++;

            for(var j = n - 1; j >= 1; j--) {

                if( v[ j ] > 1 ) {

                   v[ j ] = v[ j ] - 2;
                   v[ j - 1] = v[ j - 1 ] + 1;
                }
            } 

            out += '<div class="row">';

            for(var k = 0; k < n; k++) {

                if( v[ k ] ) {

                     out += '<div class="cell">' + (k + 1)+ '</div>';
                }
            } 

            out += '</div>'  

            s = 0;

            for(var l = 0; l < n; l++) {

                if( v[ l ] ) s++; 
            }

         }while( s < n );

   return out;
}

var solve = function() {

          var n = parseInt($('input').value)
 
          $('subsets').innerHTML = genSubsets( n )
}

var init = function() {

        DOMhelp.addEvent(document.getElementById('solve'), 'click', solve, false); 
}; 

DOMhelp.addEvent(window,'load',init,false);
