var a = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
var s = '';
var s_len = 10;
for(var i = 0; i < s_len; i++){
    s += a[Math.ceil( Math.random() * (a.length-1) )];
}
console.log(s); 
