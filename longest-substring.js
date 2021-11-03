
// Sliding window

var lengthOfLongestSubstring = function(s) {
    if(!s.length) return 0;
    
    let left = 0
    let right = 0
    let max =  0
    const seen = new Set()
    
// iterating the whole string
    while(right < s.length){
        
//     first sliding the window to the right and adding the characters        
//     if it is not in the set already
        if(!seen.has(s[right])){
           seen.add(s[right])
            right++;
            max = Math.max(max,seen.size)
           
        }
    
        if(seen.has(s[right])){
            seen.delete(s[left])
            left++
        
        }
    }

    return max
};

console.log(lengthOfLongestSubstring("abcabcbb"))
