// Copyright 2009 the Sputnik authors.  All rights reserved.
// This code is governed by the BSD license found in the LICENSE file.

/*---
info: |
    The Date.prototype.setUTCMilliseconds property "length" has { ReadOnly,
    DontDelete, DontEnum } attributes
esid: sec-date.prototype.setutcmilliseconds
es5id: 15.9.5.29_A3_T1
description: Checking ReadOnly attribute
includes: [propertyHelper.js]
---*/

var x = Date.prototype.setUTCMilliseconds.length;
verifyNotWritable(Date.prototype.setUTCMilliseconds, "length", null, 1);
if (Date.prototype.setUTCMilliseconds.length !== x) {
  $ERROR('#1: The Date.prototype.setUTCMilliseconds.length has the attribute ReadOnly');
}
