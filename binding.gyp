{
    "targets": [
        {
            "target_name": "ctrl",
            "sources": ["src/main.cc"],
            "include_dirs": [
                "<!(node -e \"console.log(require('path').resolve('.') + '/lib64')\")",
                "<!(node -e \"require('nan')\")"
            ],
            "libraries": [
                "<!(node -e \"console.log(require('path').resolve('.') + '/lib64/HIDCtrl_x64.lib')\")"
            ]
        }
    ]
}