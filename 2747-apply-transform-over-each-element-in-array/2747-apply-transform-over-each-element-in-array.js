/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    if(arr.length==0)
       return [];
       
    let returned_array=[arr.length];

    for(let i=0; i<arr.length; i++){
        returned_array[i]=fn(arr[i], i);
    }
    return returned_array;

};
