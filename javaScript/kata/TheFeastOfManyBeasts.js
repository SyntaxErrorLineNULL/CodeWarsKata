/**
 * Author: SyntaxErrorLineNULL
 */

'use strict';

// Kata: https://www.codewars.com/kata/5aa736a455f906981800360d/train/javascript

const feast = (beast, dish) => dish.startsWith(beast[0]) && dish.endsWith(beast[beast.length - 1]);

module.exports = {feast};