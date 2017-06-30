

Pod::Spec.new do |s|


  s.name         = "PPDLoanSDK"
  s.version      = "1.6"
  s.summary      = "PPDLoanSDK is a *****"

  s.description = "PPDLoanSDK is a PPDLoanSDKvvv PPDLoanSDK PPDLoanSDK PPDLoanSDK****"


  s.homepage     = "https://github.com/qingfengCarl/PPDLoanSDK"
  s.source           = { :git => "https://github.com/qingfengCarl/PPDLoanSDK.git", :tag => s.version }


  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.requires_arc = true


  s.author           = { 'gongguangming' => 'gongguangming@ppdai.com' }
  
  s.ios.deployment_target = '7.0'



  s.source_files = 'Classes/*'
  s.ios.vendored_libraries   = 'Classes/libLoansSDK.a'

  s.resources = 'Classes/PPDLoan.bundle'

   s.public_header_files = 'Classes/*.h'

   s.frameworks = 'UIKit', 'MapKit','AVFoundation','JavaScriptCore','ImageIO','StoreKit','AdSupport','AudioToolbox','CoreData','CFNetwork','AddressBookUI','CoreTelephony','CoreGraphics','MessageUI','Security','MobileCoreServices','SystemConfiguration','CoreLocation','Foundation','QuartzCore'

  s.libraries = 'iconv', 'stdc++', 'z', 'sqlite3'


end
