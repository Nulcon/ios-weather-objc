//
//  WeatherCollectionViewCell.h
//  WeatherObjC
//
//  Created by Conner on 10/2/18.
//  Copyright © 2018 Lambda School. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WeatherCollectionViewCell : UICollectionViewCell

@property (strong, nonatomic) IBOutlet UIImageView *weatherImageIcon;
@property (strong, nonatomic) IBOutlet UILabel *weatherTempLabel;
@property (strong, nonatomic) IBOutlet UILabel *weatherCityLabel;

@end

NS_ASSUME_NONNULL_END
