/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
        const chunkedArr=[];

        for(let i=0; i<arr.length; i+=size){
            const chunk=arr.slice(i,i+size);

            chunkedArr.push(chunk);
        }
        return chunkedArr;
};
