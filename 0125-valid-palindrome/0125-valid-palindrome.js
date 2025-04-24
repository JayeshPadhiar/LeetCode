/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {

    let left = 0;

    s = s.replace(/[^a-z0-9]/gi, '');
    s = s.toLowerCase();
    let right = s.length-1;

    while(left < right){
        if(s[left] == s[right]){
            left++;
            right--;
        }else{
            return false;
        }
    }

    return true;


    
};