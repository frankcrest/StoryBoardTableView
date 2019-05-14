//
//  PlayersViewController.h
//  Ratings1
//
//  Created by Frank Chen on 2019-05-13.
//  Copyright © 2019 Frank Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface PlayersViewController : UITableViewController<PlayerDetailsViewControllerDelegate>

@property (nonatomic,strong) NSMutableArray *players;

@end

NS_ASSUME_NONNULL_END
