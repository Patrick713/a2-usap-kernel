cmd_drivers/usb/gadget/function/usb_f_acm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/gadget/function/usb_f_acm.ko drivers/usb/gadget/function/usb_f_acm.o drivers/usb/gadget/function/usb_f_acm.mod.o;  true