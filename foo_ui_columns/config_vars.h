#pragma once


class cfg_window_placement_t : public cfg_struct_t < WINDOWPLACEMENT >
{
	using cfg_struct_t<WINDOWPLACEMENT>::operator=;
	virtual void get_data_raw(stream_writer * out, abort_callback & p_abort);
public:
	cfg_window_placement_t(const GUID & p_guid);;
};

class cfg_menu_item :
	public cfg_struct_t < menu_item_identifier >
{
public:
	using cfg_struct_t<menu_item_identifier>::operator=;
	using cfg_struct_t<menu_item_identifier>::operator menu_item_identifier;
	void reset()
	{
		menu_item_identifier temp;
		*this = temp;
	}
	explicit inline cfg_menu_item(const GUID & p_guid, const menu_item_identifier & p_val) : cfg_struct_t<menu_item_identifier>(p_guid, p_val) {};
	explicit inline cfg_menu_item(const GUID & p_guid, const GUID & p_val, const GUID & psub = pfc::guid_null) : cfg_struct_t<menu_item_identifier>(p_guid, menu_item_identifier(p_val, psub)) {};
	explicit inline cfg_menu_item(const GUID & p_guid) : cfg_struct_t<menu_item_identifier>(p_guid, menu_item_identifier()) {};
};

namespace settings
{
	extern cfg_bool show_status_pane,
		use_custom_splitter_divider_width;

	extern cfg_uint custom_splitter_divider_width;
}

extern cfg_string cfg_playlist_switcher_tagz;
extern cfg_menu_item cfg_playlist_double;

extern cfg_int cfg_back,
	cfg_global,
	cfg_cur_prefs_col,
	cfg_header_hottrack,
	cfg_sortsel,
	cfg_global_sort,
	cfg_plheight,
	cfg_focus,
	cfg_vis,
	cfg_vis2,
	cfg_vis_edge,
	cfg_lock,
	cfg_header,
	cfg_drop_at_end,
	cfg_mclick,
	cfg_mclick2,
	cfg_balloon,
	cfg_scroll_h_no_v,
	cfg_ellipsis,
	cfg_plist_text,
	cfg_tabs_multiline,
	cfg_plist_bk,
	cfg_frame,
	cfg_show_seltime,
	cfg_plistframe,
	cfg_tooltip,
	cfg_tooltips_clipped,
	cfg_np,
	cfg_show_systray,
	cfg_minimise_to_tray,
	cfg_show_vol,
	cfg_custom_icon,
	cfg_custom_buttons,
	cfg_drag_autoswitch,
	cfg_plist_width,
	cfg_drag_pl,
	cfg_pl_autohide,
	cfg_height,
	cfg_sel_dp,
	cfg_oldglobal,
	cfg_alternative_sel,
	cfg_plm_rename,
	cfg_plist_selected_back,
	cfg_plist_selected_frame,
	cfg_plist_selected_back_no_focus,
	cfg_plist_selected_text,
	cfg_pgen_playlist,
	cfg_pgen_tf,
	cfg_autoswitch_delay,
	cfg_pgen_dir,
	cfg_custom_buttons_over,
	cfg_custom_buttons_transparency,
	cfg_playlist_date,
	cfg_playlist_sidebar_tooltips,
	cfg_replace_drop_underscores,
	cfg_status,
	cfg_show_sort_arrows,
	cfg_toolbar_disable_default_drawing,
	cfg_sidebar_use_custom_show_delay,
	cfg_sidebar_show_delay,
	cfg_sidebar_hide_delay,
	cfg_toolbars,
	cfg_playlist_switcher_use_tagz,
	cfg_playlist_middle_action,
	cfg_playlist_panel_delete,
	cfg_nohscroll;


extern cfg_string
	cfg_tray_icon_path,
	cfg_export,
	cfg_import,
	cfg_custom_buttons_path,
	cfg_globalstring,
	cfg_colour,
	cfg_pgenstring;

extern cfg_menu_item cfg_statusdbl;


extern cfg_struct_t<LOGFONT> cfg_font,
	cfg_status_font,
	cfg_header_font,
	cfg_plist_font;


extern cfg_bool g_colours_fonts_imported;

extern cfg_window_placement_t cfg_window_placement_columns;