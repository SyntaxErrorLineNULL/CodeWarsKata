/**
 * Author: SyntaxErrorLineNULL
 */

'use strict';

const {reverseWords} = require('../kata/reverseWords')

test('Complete the solution so that it reverses all of the words within the string passed in. ', () => {
    expect(reverseWords('hello world!')).toBe('world! hello');
    expect(reverseWords('yoda doesn\'t speak like this')).toBe('this like speak doesn\'t yoda');
    expect(reverseWords('foobar')).toBe('foobar');
    expect(reverseWords('row row row your boat')).toBe('boat your row row row');
});