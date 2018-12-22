
Pod::Spec.new do |s|

  s.name         = "YHEhealthcardSDK"
  s.version      = "1.0.1"
  s.summary      = "电子健康卡SDK"

  s.description  = "电子健康卡SDK，由易惠公司开发的一款对接电子健康卡卡管系统的iOS原生SDK，支持展示电子健康码等功能。对接指南：http://120.42.37.94:9999/showdoc-master/web/#/page/2781 "

  s.homepage     = "https://github.com/XmYlzYhkj/YHEhealthcardSDK"

  s.license      = "MIT"

  s.author       = { "XmYhkj" => "yhkj_xm@163.com" }
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHEhealthcardSDK.git", :tag => s.version.to_s }

  s.frameworks       = 'SystemConfiguration', 'CoreMotion','CFNetwork', 'CoreTelephony', 'QuartzCore', 'CoreText', 'CoreGraphics', 'UIKit', 'Foundation', 'WebKit'

  s.libraries        = 'z', 'c++', 'sqlite3'
  
  s.dependency 'YHCommonSDK', '~> 1.1.3'

  s.requires_arc = true

  s.vendored_frameworks = ["Frameworks/*.framework"]

  s.resources    = 'Resources/*.bundle'


end
