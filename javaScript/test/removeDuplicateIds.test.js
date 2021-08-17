/**
 * Author: SyntaxErrorLineNULL
 */

'use strict';

const {removeDuplicateIds} = require('../kata/removeDuplicateIds')

const obj = {
    "1": ["A", "B", "C"],
    "2": ["A", "B", "D", "A"],
};

const obj1 = {
    "1": ["C", "F", "G"],
    "2": ["A", "B", "C"],
    "3": ["A", "B", "D"],
};

test('Duplicates. Duplicates Everywhere.', () => {
    expect(removeDuplicateIds(obj)).toMatchObject({'1': [ 'C' ], '2': [ 'A', 'B', 'D' ]})
    expect(removeDuplicateIds(obj1)).toMatchObject({ "1": ["F", "G"], "2": ["C"], "3": ["A", "B", "D"] })
});