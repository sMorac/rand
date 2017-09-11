var n = 10; 
var m = 9; 

n = 10
m = 9
matrix = [];
for(var i = 0; i < n; i++){
    matrix[i] = [];
    for(var j = 0; j < n; j++){
        matrix[i].push(Math.ceil( Math.random() * Number.MAX_SAFE_INTEGER ));
    }
}

console.log(matrix);
