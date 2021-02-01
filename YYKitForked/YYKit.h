//
//  YYKit.h
//  YYKit <https://github.com/ibireme/YYKit>
//
//  Created by ibireme on 13/3/30.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

#if __has_include(<YYKitForked/YYKit.h>)

FOUNDATION_EXPORT double YYKitForkedVersionNumber;
FOUNDATION_EXPORT const unsigned char YYKitForkedVersionString[];

#import <YYKitForked/YYKitMacro.h>
#import <YYKitForked/NSObject+YYAdd.h>
#import <YYKitForked/NSObject+YYAddForKVO.h>
#import <YYKitForked/NSObject+YYAddForARC.h>
#import <YYKitForked/NSString+YYAdd.h>
#import <YYKitForked/NSNumber+YYAdd.h>
#import <YYKitForked/NSData+YYAdd.h>
#import <YYKitForked/NSArray+YYAdd.h>
#import <YYKitForked/NSDictionary+YYAdd.h>
#import <YYKitForked/NSDate+YYAdd.h>
#import <YYKitForked/NSNotificationCenter+YYAdd.h>
#import <YYKitForked/NSKeyedUnarchiver+YYAdd.h>
#import <YYKitForked/NSTimer+YYAdd.h>
#import <YYKitForked/NSBundle+YYAdd.h>
#import <YYKitForked/NSThread+YYAdd.h>

#import <YYKitForked/UIColor+YYAdd.h>
#import <YYKitForked/UIImage+YYAdd.h>
#import <YYKitForked/UIControl+YYAdd.h>
#import <YYKitForked/UIBarButtonItem+YYAdd.h>
#import <YYKitForked/UIGestureRecognizer+YYAdd.h>
#import <YYKitForked/UIView+YYAdd.h>
#import <YYKitForked/UIScrollView+YYAdd.h>
#import <YYKitForked/UITableView+YYAdd.h>
#import <YYKitForked/UITextField+YYAdd.h>
#import <YYKitForked/UIScreen+YYAdd.h>
#import <YYKitForked/UIDevice+YYAdd.h>
#import <YYKitForked/UIApplication+YYAdd.h>
#import <YYKitForked/UIFont+YYAdd.h>
#import <YYKitForked/UIBezierPath+YYAdd.h>

#import <YYKitForked/CALayer+YYAdd.h>
#import <YYKitForked/YYCGUtilities.h>

#import <YYKitForked/NSObject+YYModel.h>
#import <YYKitForked/YYClassInfo.h>

#import <YYKitForked/YYCache.h>
#import <YYKitForked/YYMemoryCache.h>
#import <YYKitForked/YYDiskCache.h>
#import <YYKitForked/YYKVStorage.h>

#import <YYKitForked/YYImage.h>
#import <YYKitForked/YYFrameImage.h>
#import <YYKitForked/YYSpriteSheetImage.h>
#import <YYKitForked/YYAnimatedImageView.h>
#import <YYKitForked/YYImageCoder.h>
#import <YYKitForked/YYImageCache.h>
#import <YYKitForked/YYWebImageOperation.h>
#import <YYKitForked/YYWebImageManager.h>
#import <YYKitForked/UIImageView+YYWebImage.h>
#import <YYKitForked/UIButton+YYWebImage.h>
#import <YYKitForked/MKAnnotationView+YYWebImage.h>
#import <YYKitForked/CALayer+YYWebImage.h>

#import <YYKitForked/YYLabel.h>
#import <YYKitForked/YYTextView.h>
#import <YYKitForked/YYTextAttribute.h>
#import <YYKitForked/YYTextArchiver.h>
#import <YYKitForked/YYTextParser.h>
#import <YYKitForked/YYTextUtilities.h>
#import <YYKitForked/YYTextRunDelegate.h>
#import <YYKitForked/YYTextRubyAnnotation.h>
#import <YYKitForked/NSAttributedString+YYText.h>
#import <YYKitForked/NSParagraphStyle+YYText.h>
#import <YYKitForked/UIPasteboard+YYText.h>
#import <YYKitForked/YYTextLayout.h>
#import <YYKitForked/YYTextLine.h>
#import <YYKitForked/YYTextInput.h>
#import <YYKitForked/YYTextDebugOption.h>
#import <YYKitForked/YYTextContainerView.h>
#import <YYKitForked/YYTextSelectionView.h>
#import <YYKitForked/YYTextMagnifier.h>
#import <YYKitForked/YYTextEffectWindow.h>
#import <YYKitForked/YYTextKeyboardManager.h>

#import <YYKitForked/YYReachability.h>
#import <YYKitForked/YYGestureRecognizer.h>
#import <YYKitForked/YYFileHash.h>
#import <YYKitForked/YYKeychain.h>
#import <YYKitForked/YYWeakProxy.h>
#import <YYKitForked/YYTimer.h>
#import <YYKitForked/YYTransaction.h>
#import <YYKitForked/YYAsyncLayer.h>
#import <YYKitForked/YYSentinel.h>
#import <YYKitForked/YYDispatchQueuePool.h>
#import <YYKitForked/YYThreadSafeArray.h>
#import <YYKitForked/YYThreadSafeDictionary.h>

#else

#import "YYKitMacro.h"
#import "NSObject+YYAdd.h"
#import "NSObject+YYAddForKVO.h"
#import "NSObject+YYAddForARC.h"
#import "NSString+YYAdd.h"
#import "NSNumber+YYAdd.h"
#import "NSData+YYAdd.h"
#import "NSArray+YYAdd.h"
#import "NSDictionary+YYAdd.h"
#import "NSDate+YYAdd.h"
#import "NSNotificationCenter+YYAdd.h"
#import "NSKeyedUnarchiver+YYAdd.h"
#import "NSTimer+YYAdd.h"
#import "NSBundle+YYAdd.h"
#import "NSThread+YYAdd.h"

#import "UIColor+YYAdd.h"
#import "UIImage+YYAdd.h"
#import "UIControl+YYAdd.h"
#import "UIBarButtonItem+YYAdd.h"
#import "UIGestureRecognizer+YYAdd.h"
#import "UIView+YYAdd.h"
#import "UIScrollView+YYAdd.h"
#import "UITableView+YYAdd.h"
#import "UITextField+YYAdd.h"
#import "UIScreen+YYAdd.h"
#import "UIDevice+YYAdd.h"
#import "UIApplication+YYAdd.h"
#import "UIFont+YYAdd.h"
#import "UIBezierPath+YYAdd.h"

#import "CALayer+YYAdd.h"
#import "YYCGUtilities.h"

#import "NSObject+YYModel.h"
#import "YYClassInfo.h"

#import "YYCache.h"
#import "YYMemoryCache.h"
#import "YYDiskCache.h"
#import "YYKVStorage.h"

#import "YYImage.h"
#import "YYFrameImage.h"
#import "YYSpriteSheetImage.h"
#import "YYAnimatedImageView.h"
#import "YYImageCoder.h"
#import "YYImageCache.h"
#import "YYWebImageOperation.h"
#import "YYWebImageManager.h"
#import "UIImageView+YYWebImage.h"
#import "UIButton+YYWebImage.h"
#import "MKAnnotationView+YYWebImage.h"
#import "CALayer+YYWebImage.h"

#import "YYLabel.h"
#import "YYTextView.h"
#import "YYTextAttribute.h"
#import "YYTextArchiver.h"
#import "YYTextParser.h"
#import "YYTextUtilities.h"
#import "YYTextRunDelegate.h"
#import "YYTextRubyAnnotation.h"
#import "NSAttributedString+YYText.h"
#import "NSParagraphStyle+YYText.h"
#import "UIPasteboard+YYText.h"
#import "YYTextLayout.h"
#import "YYTextLine.h"
#import "YYTextInput.h"
#import "YYTextDebugOption.h"
#import "YYTextContainerView.h"
#import "YYTextSelectionView.h"
#import "YYTextMagnifier.h"
#import "YYTextEffectWindow.h"
#import "YYTextKeyboardManager.h"

#import "YYReachability.h"
#import "YYGestureRecognizer.h"
#import "YYFileHash.h"
#import "YYKeychain.h"
#import "YYWeakProxy.h"
#import "YYTimer.h"
#import "YYTransaction.h"
#import "YYAsyncLayer.h"
#import "YYSentinel.h"
#import "YYDispatchQueuePool.h"
#import "YYThreadSafeArray.h"
#import "YYThreadSafeDictionary.h"

#endif
