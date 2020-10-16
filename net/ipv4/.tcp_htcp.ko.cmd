cmd_net/ipv4/tcp_htcp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/tcp_htcp.ko net/ipv4/tcp_htcp.o net/ipv4/tcp_htcp.mod.o;  true
