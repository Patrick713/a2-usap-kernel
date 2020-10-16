cmd_net/bridge/bridge.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/bridge/bridge.ko net/bridge/bridge.o net/bridge/bridge.mod.o;  true
