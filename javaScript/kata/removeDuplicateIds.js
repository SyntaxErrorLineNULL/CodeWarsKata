/**
 * Author: SyntaxErrorLineNULL
 */

'use strict';

// Kata: https://www.codewars.com/kata/5e8dd197c122f6001a8637ca/train/javascript
const removeDuplicateIds = (obj) => {
    const existingValues = []
    const reverseSortedKeys = Object.keys(obj).sort((v,  n) => n - v);

    for (let key of reverseSortedKeys) {
        obj[key] = obj[key].filter(value => {
            if (existingValues.includes(value)) {
                return false;
            } else {
                existingValues.push(value);
                return true;
            }
        })
    }
    return obj;
};

module.exports = {removeDuplicateIds};
