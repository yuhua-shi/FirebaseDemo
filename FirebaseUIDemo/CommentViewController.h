//
//  Header.h
//  FirebaseUIDemo
//
//  Created by Yuhua Shi on 2018/06/08.
//  Copyright © 2018年 Yuhua Shi. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface CommentViewController : UITableViewController 
@property (weak, nonatomic) IBOutlet UITextField *bornTextField;
- (IBAction)submitBtn:(id)sender;
//@property(nonatomic, strong) NSArray *listTeams;
@end
