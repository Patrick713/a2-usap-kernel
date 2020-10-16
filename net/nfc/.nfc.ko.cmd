cmd_net/nfc/nfc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/nfc/nfc.ko net/nfc/nfc.o net/nfc/nfc.mod.o;  true
