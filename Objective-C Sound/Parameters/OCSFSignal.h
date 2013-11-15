//
//  OCSFSignal.h
//  Objective-C Sound
//
//  Created by Aurelius Prochazka on 7/22/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSParameter.h"

/** Phase Vocoder Streaming output type 
 */

@interface OCSFSignal : OCSParameter

/// Creates an f-signal
/// @param aString Label for the f-signal
- (instancetype)initWithString:(NSString *)aString;

@end
