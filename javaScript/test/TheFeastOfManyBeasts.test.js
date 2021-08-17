/**
 * Author: SyntaxErrorLineNULL
 */

'use strict';

const {feast} = require('../kata/TheFeastOfManyBeasts');

test('The Feast of Many Beasts', () => {
    expect(feast("great blue heron", "garlic naan")).toBe(true);
    expect(feast("chickadee", "chocolate cake")).toBe(true);
    expect(feast("brown bear", "bear claw")).toBe(false)
});