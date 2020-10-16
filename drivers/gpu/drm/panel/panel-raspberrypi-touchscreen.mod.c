#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xe0036949, "mipi_dsi_driver_unregister" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0xb9574a84, "mipi_dsi_driver_register_full" },
	{ 0xbf9d79db, "mipi_dsi_attach" },
	{ 0xe1d6d0c9, "drm_panel_add" },
	{ 0x6cb51f67, "drm_panel_init" },
	{ 0x833959c6, "mipi_dsi_device_register_full" },
	{ 0xe3a22195, "of_graph_get_remote_port" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xbd5d939d, "of_find_mipi_dsi_host_by_node" },
	{ 0x5e9500a, "of_graph_get_remote_port_parent" },
	{ 0x4e56a3c2, "of_graph_get_next_endpoint" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa024a30, "mipi_dsi_generic_write" },
	{ 0x824e6bcf, "i2c_smbus_read_byte_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2d2f1e0c, "i2c_smbus_write_byte_data" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xaf6cea1d, "drm_display_info_set_bus_formats" },
	{ 0x12be653a, "drm_mode_probed_add" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xc30bb8d9, "drm_mode_duplicate" },
	{ 0x37a0cba, "kfree" },
	{ 0x3be54ea8, "mipi_dsi_device_unregister" },
	{ 0x7cd5bd21, "drm_panel_remove" },
	{ 0x9707c938, "mipi_dsi_detach" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panelC*");

MODULE_INFO(srcversion, "078EAA1C47D5AF7D4E497A5");
