//
//	VidyoVideoCapability_Objc.h
//	VidyoClient
//
//	This file is auto generated, do not edit this file
//	Copyright (c) 2016 Vidyo, Inc. All rights reserved.
//

#import "VidyoMediaFormats_Objc.h"
@class VCTimeRange;
@class VCVideoFrameIntervalRange;
@interface VCVideoCapability : NSObject
{
}

	@property size_t height;
	@property NSMutableArray* ranges;
	@property size_t width;
@end
@interface VCVideoFrameIntervalRange : NSObject
{
}

	@property NSMutableArray* formats;
	@property VCTimeRange* range;
	@property long step;
@end
@interface VCTimeRange : NSObject
{
}

	@property long begin;
	@property long end;
@end
