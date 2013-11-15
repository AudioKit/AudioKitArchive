//
//  OCSPluckedString.h
//  Objective-C Sound
//
//  Created by Aurelius Prochazka on 10/30/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSAudio.h"
#import "OCSParameter+Operation.h"

/** Physical model of the plucked string.
 
 A user can control the pluck point, the pickup point, the filter, and an additional audio signal used to excite the 'string'. Based on the Karplus-Strong algorithm.
 */

@interface OCSPluckedString : OCSAudio

/// Instantiates the plucked string
/// @param frequency Frequency of the string
/// @param pluckPosition  The point of pluck as a fraction of the way up the string (0 to 1). A pluck point of zero means no initial pluck.
/// @param amplitude Amplitude of note.
/// @param samplePosition  Proportion of the way along the string to sample the output.
/// @param reflectionCoefficient The coefficient of reflection, indicating the lossiness and the rate of decay. It must be strictly between 0 and 1 (it will complain about both 0 and 1).
/// @param excitationSignal A signal which excites the string.
- (instancetype)initWithFrequency:(OCSConstant *)frequency
          pluckPosition:(OCSConstant *)pluckPosition
              amplitude:(OCSControl *)amplitude
         samplePosition:(OCSControl *)samplePosition
  reflectionCoefficient:(OCSControl *)reflectionCoefficient
       excitationSignal:(OCSAudio *)excitationSignal;

@end