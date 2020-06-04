Pod::Spec.new do |s|

  s.name         = "WalkMeEditor"
  s.version      = "1.6.7"
  s.summary      = "WalkMe Editor SDK for macOS"
  s.homepage     = "http://walkme.com"
  s.license      = "Commercial"
  s.author       = { "WalkMe Inc" => "http://walkme.com" }
  s.source       = { :git => "https://github.com/abbiio/walkme_sdk_macos.git", :tag => s.version }
  s.osx.deployment_target = '10.9'
  s.preserve_paths = "WalkMeEditor.framework"
  s.frameworks = "Cocoa", "WebKit"
  s.requires_arc = true
  s.vendored_frameworks = 'WalkMeEditor.framework'

end
