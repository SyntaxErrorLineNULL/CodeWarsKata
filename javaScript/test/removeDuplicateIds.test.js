/**
 * Author: SyntaxErrorLineNULL
 */

'use strict';

const {removeDuplicateIds} = require('../kata/removeDuplicateIds')

const obj = {
    "1": ["A", "B", "C"],
    "2": ["A", "B", "D", "A"],
};

test('Duplicates. Duplicates Everywhere.', () => {
    expect(removeDuplicateIds(obj)).toMatchObject({'1': [ 'C' ], '2': [ 'A', 'B', 'D' ]}
    )
});