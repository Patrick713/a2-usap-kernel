cmd_drivers/usb/serial/keyspan_pda.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/keyspan_pda.ko drivers/usb/serial/keyspan_pda.o drivers/usb/serial/keyspan_pda.mod.o;  true
