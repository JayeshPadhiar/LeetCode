/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {

    let dict = {};

    for(let i=0; i<nums.length; i++){
        dict[nums[i]] = i;
    }
    
    for(let j=0; j<nums.length; j++){
        let diff = target - nums[j];
        if(dict[diff] >= 0 && j != dict[diff]){
            return [j, dict[diff]];
        }
    }
};