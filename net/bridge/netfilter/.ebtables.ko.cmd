cmd_net/bridge/netfilter/ebtables.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/bridge/netfilter/ebtables.ko net/bridge/netfilter/ebtables.o net/bridge/netfilter/ebtables.mod.o;  true