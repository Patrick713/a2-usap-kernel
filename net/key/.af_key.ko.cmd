cmd_net/key/af_key.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/key/af_key.ko net/key/af_key.o net/key/af_key.mod.o;  true
