cmd_net/netfilter/ipvs/ip_vs_lc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/ipvs/ip_vs_lc.ko net/netfilter/ipvs/ip_vs_lc.o net/netfilter/ipvs/ip_vs_lc.mod.o;  true